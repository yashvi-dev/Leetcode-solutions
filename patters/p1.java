package patters;

public class p1 {
    public static void main(String[] args) {
        int n = 5;
        pat9(n);
    }

    public static void pat1 (int n) {
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        
    }

    public static void pat2 (int n) {
        
        for (int i = 1; i <= n; i++) {
            for(int j=1; j<=n;j++){
                System.out.print("* ");
            }
            System.out.println();
            
        }
        
    }

    public static void pat3(int n){
       for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            System.out.print(" +");
        }
        System.out.println();
       }
    }

    public static void pat4(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=1;j++){
                System.out.print(j);
            }
            System.out.println();
        }
    }
    
    public static void pat5(int n){
        for(int rowNum=1;rowNum<=2*n-1;rowNum++){
            int colNum=rowNum>n?2*n-rowNum:rowNum;
            for(int i=1;i<=colNum;i++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    
    public static void pat6(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (j <= n - i) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
    
    public static void pat7(int n){
        for(int i=1;i<n;i++){
            for(int space = 1; space < i; space++){
                System.out.print(" ");
            }
            // Print stars
            for(int star = 1; star <= n - i; star++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
   
    public static void pat8(int n){
        for (int i = 0; i < n; i++) {
            // Print spaces
            for (int spaces = 0; spaces < n - i ; spaces++) {
                System.out.print(" ");
            }
            for (int stars = 0; stars < 2*i+1; stars++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
   
    public static void pat9(int n){
        for (int i = 0; i < n; i++) {
            for(int spaces=0 ; spaces<i;spaces++){
                System.out.print(" ");
            }
            for (int stars = 0; stars < 2*(n-i)-1; stars++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void pat11(){}
    public static void pat12(){}
    public static void pat13(){}
    public static void pat14(){}
    public static void pat15(){}
    public static void pat16(){}
    public static void pat17(){}
    public static void pat18(){}
    public static void pat19(){}
    public static void pat20(){}
    public static void pat21(){}
    public static void pat22(){}
    public static void pat23(){}
    public static void pat24(){}
    public static void pat25(){}
    public static void pat26(){}
    public static void pat27(){}
    public static void pat28(){}
    public static void pat29(){}
    public static void pat30(){}
    public static void pat31(){}
    public static void pat32(){}
    public static void pat33(){}
    public static void pat34(){}
    public static void pat35(){}
}
