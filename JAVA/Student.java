class Student {
 String name ;
 int roll ;

         Student ( String n , int r ) {
                 name = n ;
                 roll = r ;
                 }

         void display () {
                 System . out . println (" Name : " + name ) ;
                 System . out . println (" Roll No: " + roll ) ;
                 }

         public static void main ( String [] args ) {
                 Student s1 = new Student(" DEVRAJ ", 405);
                 s1.display();
         }}