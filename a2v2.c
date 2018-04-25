#include <stdio.h>
#include <ctype.h>

int main()
{
 int c;
 int prev, cur, temp;
 printf("Start\n");
 c = getchar();

 while ( c != EOF )
  {
	 prev = cur;
	  if(isalpha(c))
	  {
		  c='s';
		  if(prev != c)
		  {
		  putchar( c );
		  }
		  cur = c;
	  }
	  else if(isdigit(c))
	  {	  
		  c='n';
		  if(prev != c)
		  {
		  putchar( c );
		  }
		  cur = c;
      }
	  else if(c == '+'||c == '-'||c == '*'||c == '/'||c == '%'||c== '<'||c == '='||c == '>'||c == '!')
	  {
		  c='o';
		  putchar( c );
		  cur = c;
	  }	  
	  else if(c == ' ')
	  {
		  c='w';
		  if(prev != c)
		  {
		  putchar( c );
		  }
		  cur = c;
	  }
	  else if(c == '\n')
	  {
		  c='w';
		  if(prev != c)
		  {
		  putchar( c );
		  }
		  cur = c;
  		  printf("\n");
	  }
	  else
	  {
		  c='p';
		  putchar( c );
		  cur = c;
	  }
   c = getchar();
  }
 printf("End\n");

 return 0;
}
