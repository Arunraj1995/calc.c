import java.lang.*;

import java.util.*;

import java.io.*;

 

 

class ReverseNumber

{

      public static String ReadString()

      {

           try

           {

                 InputStreamReader input = new InputStreamReader(System.in);

                 BufferedReader reader = new BufferedReader(input);

                 return reader.readLine();

           }

           catch (Exception e)

           {

 

                 e.printStackTrace();

                 return "";

           }

      }

 

 

      public static int ReadInteger()

      {

           try

           {

                 InputStreamReader input = new InputStreamReader(System.in);

                 BufferedReader reader = new BufferedReader(input);

                 return Integer.parseInt(reader.readLine());

           }

           catch (Exception e)

           {

 

                 e.printStackTrace();

                 return 0;

           }

      }

     

      static int CountNumberOfDigits_UsingLog(int number)

      {

         return (int)(Math.log((double)number) + 1);

      }

     

 

      static int CountNumberOfDigits(int number)

      {

         int numdgits = 0;

         do

         {

            number = number / 10;

            numdgits++;

         } while (number > 0);

         return numdgits;

      }

 

      public static void main(String[] args)

      {

         System.out.println("\nProgram to find the reverse of a number. Enter -1 to exit");

         while(true)

         {

            System.out.print("\n\nEnter a Number (-1 to exit): ");

            int n = ReadInteger();

            if(n < 0)

               break;

            int number = n;

            int index = 0;

            int numdigits = CountNumberOfDigits(number);

 

            System.out.format("Number of digits in %d is: %d\n", number, numdigits);

            int result = 0;

            for (int i = 0; i < numdigits; i++)

            {

               result *= 10;

               result += n % 10;

               n = n / 10;

            }

            System.out.format("The reverse of number %d is: %d\n", number, result);

         }     

      }

}
