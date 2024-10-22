/*#include <stdio.h>
 #define IN 1 /* inside a word
 #define OUT 0 /* outside a word
  count lines, words, and characters in input
 main()
 {
 int c, nl, nw, nc, state;
 state = OUT;
 nl = nw = nc = 0;
 while ((c = getchar()) != EOF) {
 ++nc;
 if (c == '\n')
 ++nl;
 if (c == ' ' || c == '\n' || c = '\t')
 state = OUT;
 else if (state == OUT) {
 state = IN;
 ++nw;
 }
 }
 printf("%d %d %d\n", nl, nw, nc);
 }
*/

   #include <stdio.h>
   int power(int m, int n);
    /* test power function */
       main()     {         int i;
        for (i = 7; i < 10; ++i)
            printf("%d %d %d\n", i, power(2,i), power(-3,i));
                 return 0;     }
    /* power:  raise base to n-th power; n >= 0 */
     int power(int base, int n)
       {         int i,  p;
        p = 1;
              for (i = 1; i <= n; ++i)             p = p * base;         return p;
    }
