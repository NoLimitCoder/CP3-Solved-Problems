import java.util.*;
import java.io.*;
import java.math.BigInteger;
import javax.script.ScriptEngineManager;
import javax.script.ScriptEngine;

public class Main{


  static void solve1(){
    Scanner sc = new Scanner(System.in);
    double x = sc.nextDouble();
    System.out.printf("%7.3f",x);
  }

  static void solve2(){
    //System.out.printf("%.*f",n,PI); doesn't work. No pass by-reference in Java
    // solved in C++.
  }

  static void solve3(){
    //solved in C++
  }

  static void solve4(){
    //solved in C++
  }
  static void solve5(){
    //solved in C++
  }

  static void solve6(){
    //solved in C++
  }

  static void solve7(){
    //solved in C++
  }

  static void solve8(){
    //solved in C++
  }

  static void solve9(){
    Scanner sc = new Scanner(System.in);
    String num = sc.next(); int x = sc.nextInt(), y = sc.nextInt();
    BigInteger ans = new BigInteger(num, x);
    System.out.println(ans.toString(y));
  }

  static void solve10(){
    //solved in C++
  }

  static void solve11() throws Exception {
    ScriptEngineManager mgr = new ScriptEngineManager();
    ScriptEngine engine = mgr.getEngineByName("JavaScript");
    Scanner sc = new Scanner(System.in);
    while (sc.hasNextLine())
      {System.out.println(engine.eval(sc.nextLine()));}
  }



  public static void main(String[] args){
    //solve1();
    //solve2();
    //solve3();
    //solve4();
    //solve5();
    //solve6();
    //solve7();
    //solve8();
    //solve9();
    //solve10();
    //solve11();
  }


}
