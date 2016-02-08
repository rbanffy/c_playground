public class TwoLoops {
    public static void main(String argv[]) {
        int i = 0, j;
        while (i < 100000) {
            j = i;
            while (j < 100000) {
                j++;
            }
            i++;
        }
    }
}
