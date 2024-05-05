import java.util.*;


public class 04_Collection_sort {
    
public static void main( String args[]){
    List <Integer> list= new ArrayList<Integer>();

    list.add(10);
    list.add(5);
    list.add(20);
    list.add(1);
    
    Collections.sort(list);
    System.out.println(list);
    Collections.sort ( list, Collections.reverseOrder());
    System.out.println(list);

}}