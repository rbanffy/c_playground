public class TwoLoopsWithCounter {
    public static void main(String argv[]) {
        int i = 0, j, counter = 0;
        while (i < 100000) {
            j = i;
            while (j < 100000) {
                j++;
                counter++;
            }
            i++;
        }
        System.out.format("%d iterations\n", counter);
    }
}
