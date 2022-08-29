public class Linearsearch {
    public static boolean Linear(int arr[] , int key , int size){
        if(size == 0) return false;
        if(arr[size-1]==key) return true;
        return Linear(arr,key,size-1);
    }
    public static void main(String [] args){
        int arr[] = {1,2,3,4,5};
        int key = 9;
        int size = 5;
        if(Linear(arr,key,size)) {
            System.out.println("y");
            }
        else {
            System.out.println("n");
            }
    }   
}