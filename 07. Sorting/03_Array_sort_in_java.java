import java.util.Arrays;

public class 03_Array_sort_in_java {
    public static void main(String args[]) {
        int arr[] = {5, 20, 12, 30};
        char arr2[] = {'B', 'B', 'A', 'C', 'A'};
        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
        Arrays.sort(arr2);
        System.out.println(Arrays.toString(arr2));
    }
}
