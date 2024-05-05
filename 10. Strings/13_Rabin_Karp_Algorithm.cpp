#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void RBSearch(string pat, string txt, int M, int N)
{
    int d = 256; // Assuming ASCII character set
    int q = 101; // A prime number for hash function

    // Calculating d^(m-1) % q
    int h = 1;
    for (int i = 0; i < M - 1; i++)
        h = (h * d) % q;

    // Compute p and t0

    int p = 0, t = 0;
    for (int i = 0; i < M; i++)
    {
        p = (p * d + pat[i]) % q;
        t = (t * d + txt[i]) % q;
    }

    // Check for Spurious hit

    for (int i = 0; i <= N - M; i++)
    {
        if (p == t)
        {
            bool flag = true;
            for (int j = 0; j < M; j++)
                if (txt[i + j] != pat[j])
                {
                    flag = false;
                    break;
                }
            if (flag == true)
            {
                cout << i << " ";
            }
        }

        // Compute t(i+1) using t(i)

        if (i < N - M)
        {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;
            if (t < 0)
                t = t + q;
        }
    }
}

int main()
{
    string txt = "AABAACAADAABAAABAA";
    string pat = "AABA";
    RBSearch(pat, txt, pat.length(), txt.length());
    return 0;
}
