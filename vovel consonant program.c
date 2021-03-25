#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{char x;
printf("programe to check the alphabate,or vovles");
scanf("%c",&x);
if(x>="a"&&x<="z")
{if(x=="a"||x=="e"||x="i"||x="o"||x="u")
{printf("given alphabate is vovle");
}
else {printf("given alphabate is consonant");}
}if(x=="A"||x=="E"||x=="I"||x=="O"||x=="U")
{printf("given alphabate is vovel");
}
else {printf("it is not alphabate");
}
}
