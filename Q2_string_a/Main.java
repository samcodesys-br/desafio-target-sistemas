
import java.util.Scanner;

public class Main{
    public static void main(String[] argsv){
        Scanner input=new Scanner(System.in);
        do{
            int count=0;
            char[] string=input.nextLine().toCharArray();
            if(string.length==0){
                break;
            }
            for(char letra:string){
                if(letra=='a' || letra=='A'){
                    count++;
                }
            }
            System.out.println("A string possui "+count+" letras A no total");
        }while(true);
        input.close();
    }
}