#include <stdio.h>
#include <stdlib.h>

#define MAXN 1000000

static int spf[MAXN + 1];
static unsigned char squarefree[MAXN + 1];

static int sq[MAXN + 1];
static int good[MAXN + 1];
static int cval[MAXN + 1];

static int cntsq;

void sieve(int n) {
    // Smallest prime factor
    for (int i = 2; i <= n; i++) {
        if (spf[i] == 0) {
            spf[i] = i;

            if ((long long)i * i <= n) {
                for (long long j = (long long)i * i;
                     j <= n; j += i) {
                    if (spf[j] == 0)
                        spf[j] = i;
                }
            }
        }
    }

    // Find square-free numbers
    for (int i = 1; i <= n; i++)
        squarefree[i] = 1;

    squarefree[0] = 0;

    for (int p = 2; p <= n; p++) {
        if (spf[p] == p && (long long)p * p <= n) {
            for (long long j = (long long)p * p;
                 j <= n; j += (long long)p * p) {
                squarefree[j] = 0;
            }
        }
    }

    cntsq = 0;

    for (int i = 1; i <= n; i++) {
        if (squarefree[i])
            sq[++cntsq] = i;
    }
}

int main(void) {
    int t;
    scanf("%d", &t);

    static int ns[10005];
    int maxn = 0;

    for (int i = 0; i < t; i++) {
        scanf("%d", &ns[i]);

        if (ns[i] > maxn)
            maxn = ns[i];
    }

    sieve(maxn);

    for (int tc = 0; tc < t; tc++) {
        int n = ns[tc];

        // cval[x] = number of integers <= n
        // having square-free kernel x.
        int r = 0;

        while ((long long)(r + 1) * (r + 1) <= n)
            r++;

        for (int i = 1; i <= n; i++) {
            while ((long long)r * r > n / i)
                r--;

            cval[i] = r;
        }

        long long ans = 0;

        int divs[256];
        int primes[8];

        // Enumerate square-free d
        for (int di = 1; di <= cntsq && sq[di] <= n; di++) {
            int d = sq[di];

            // Factorize d
            int k = 0;
            int y = d;

            while (y > 1) {
                int p = spf[y];
                primes[k++] = p;

                while (y % p == 0)
                    y /= p;
            }

            // Generate all divisors of d
            int nd = 1;
            divs[0] = 1;

            for (int j = 0; j < k; j++) {
                int old = nd;

                for (int q = 0; q < old; q++) {
                    divs[nd++] = divs[q] * primes[j];
                }
            }

            // Find the largest required bound for g
            int maxlim = 0;

            for (int j = 0; j < nd; j++) {
                int u = divs[j];
                int v = d / u;

                int lim = n / (u > v ? u : v);

                if (lim > maxlim)
                    maxlim = lim;
            }

            // Generate square-free g coprime to d
            int ngood = 0;

            for (int gi = 1;
                 gi <= cntsq && sq[gi] <= maxlim;
                 gi++) {

                int g = sq[gi];
                int coprime = 1;

                for (int j = 0; j < k; j++) {
                    if (g % primes[j] == 0) {
                        coprime = 0;
                        break;
                    }
                }

                if (coprime)
                    good[ngood++] = g;
            }

            int cd = cval[d];

            // Count ordered pairs of kernels
            for (int j = 0; j < nd; j++) {
                int u = divs[j];
                int v = d / u;

                int lim = n / (u > v ? u : v);

                for (int gi = 0;
                     gi < ngood && good[gi] <= lim;
                     gi++) {

                    int g = good[gi];

                    ans += (long long)cd
                         * cval[g * u]
                         * cval[g * v];
                }
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}
