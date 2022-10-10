package Algorithms.patternSearching;

public class KnuthMorrisPrat {
    void KMPSearch(String pat, String txt) {
        int M = pat.length();
        int N = txt.length();

        int lps[] = new int[M];
        int j = 0, i = 0;

        computeLPSArray(pat, M, lps);
        while (i < N) {
            if (pat.charAt(j) == txt.charAt(i)) {
                j++;
                i++;
            }
            if (j == M) {
                System.out.println("pattern found @ " + (i - j));
                j = lps[j - 1];
            } else if (i < N && pat.charAt(j) != txt.charAt(i)) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i = i + 1;
                }
            }
        }
    }

    void computeLPSArray(String pat, int M, int lps[]) {
        int len = 0, i = 1;
        lps[0] = 0;

        // loop calculates lps[i] for i = 1 to M-1
        while (i < M) {
            if (pat.charAt(i) == pat.charAt(len)) {
                len++;
                lps[i] = len;
                i++;
            } else { // pat[i]!= pat[len]
                if (len != 0) {

                    len = lps[len - 1];
                } else { // if len==0
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }

    public static void main(String[] args) {

        String txt = "ABABDABACDABABCABAB";
        String pat = "ABABCABAB";
        new KnuthMorrisPrat().KMPSearch(pat, txt);
    }
}
