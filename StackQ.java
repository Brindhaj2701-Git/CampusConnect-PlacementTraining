//implement of stack using queue
import java.util.*;

public class StackQ {
    
    public static class Stack{
        
        Queue<Integer>s1=new LinkedList<>(); 
        void push(int data){
            s1.add(data);
            int size=s1.size();
            for(int i=0;i<size;i++){
                s1.add(s1.peek());
                s1.poll();
            }
        }
        
        
        void pop(){
            if (!s1.isEmpty()){
                s1.poll();
            }  
        }

        int top(){
            if (!s1.isEmpty()){
                return s1.peek();
            }
            return 0 ;
        }

        int size(){
            return s1.size();
        }
    }

    public static void main(String[]args){

       Stack s = new Stack();

       s.push(1);
       s.push(2);
       s.push(3);
       s.push(4);

       s.pop();

       System.out.println(s.top());

       s.pop();

       System.out.println(s.top());
       System.out.println(s.size());
       
    }
}

