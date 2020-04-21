#include<iostream>
#include<bitset>
using namespace std;

/************************************* POWER FUNCTION *********************************************************/
  int power(int num, int pow)
      {int ans=1;
      while(pow>=1)
       {ans=ans*num;
           pow--;}
      return ans;}
      
  int rem,position,result;
 
 /************************************* DECIMAL NUMBER CONVERTER *********************************************************/
  int dec_bin(int decimal)
       {result=0;
	    position=1;
    	while(decimal!=0)
     	{rem=decimal%2;
	      result=result+rem*position;
	       decimal=decimal/2;
	       position=position*10;}
        	return result;}
        	
        	
  int dec_oct( int decimal)
       {
    	result=0;
	    position=1;
	    while(decimal!=0)
	    {rem=decimal%8;
	      result=result+rem*position;
	     decimal=decimal/8;
	      position=position*10;}
	    return result;}
        
        
  int dec_hex(int dec_num)
     {char hex_num[100];
      int i=0;
       if( dec_num>0)
	   {while(dec_num>0)
         { rem=dec_num%16;
             if(rem<10)
               {hex_num[i]= '0'+rem;}
            else
         {hex_num[i]=55+rem;}
         dec_num=dec_num/16;
        i++;}
         cout<<"\n\t Equivalent Answer in Hexadecimal =  ";
        while(i--)
           {hex_num[i];
            cout<<hex_num[i];
                 }}
        else if(dec_num==0)
        cout<<"\n\t Equivalent Answer in Hexadecimal = 0 ";
        else
        { cout<<"\n\t Answer is Not In Hexadecimal Range  ";
		}}
	
   int pow,sum,res;  
   
 /************************************* BINARY NUMBER CONVERTER *********************************************************/            
  int bin_dec(int num)
     {  pow=0;
    	sum=0;
        while(num!=0)
     	{sum=sum+(num%10)*power(2,pow);
    	 pow++;
    	 num=num/10;}
        return sum;}
                 
         
  int bin_oct(int num)
     { res=bin_dec(num);
	    return dec_oct(res);	}

        
   void bin_hex(int num)
     { res=bin_dec(num);
      dec_hex(res);}

 /************************************* OCTAL NUMBER CONVERTER *********************************************************/           	
    int oct_dec(int num)
	  { sum=0;
        pow=0;
    	while(num!=0)
      	{sum=sum+(num%10)*power(8,pow);
	     pow++;
	     num=num/10;}
	        return sum;}
	      
               	
  int oct_bin(int num)
	  { res = oct_dec(num);
	   return dec_bin(res);}
	   
  void oct_hex(int num)
     { res=oct_dec(num);
       dec_hex(res);}
   
/************************************* HEXADECIMAL NUMBER CONVERTER *****************************************************/            
  int hex_dec(char hexVal[])
     {   int i=0;
      int len =0;
     while(hexVal[i]!= '\0')
         { len++;
         i++;}
         pow = 1;
         sum = 0;
    // Extracting characters as digits from last character
    for (int j=len-1; j>=0; j--)
         {if (hexVal[j]>='0' && hexVal[j]<='9')
             { sum += (hexVal[j] - 48)*pow;
                   pow= pow * 16; }
              
         else if (hexVal[j]>='A' && hexVal[j]<='F')
             { sum += (hexVal[j] - 55)*pow;
                  pow= pow  *16;}
                   
         else if(hexVal[j]>='a' && hexVal[j]<='f')  
		  { sum += (hexVal[j] - 87)*pow;
                   pow= pow *16;}}
        return sum;}
    
  int hex_bin(char hexVal[])
     { res=hex_dec(hexVal);
       return dec_bin(res);
       }
       
       
  int hex_oct(char hexVal[])
     { res=hex_dec(hexVal);
     return dec_oct(res);
      }
      
 /**************************************** ACCURACY CHECK  *********************************************************/     
    int hex_chk(char hexVal[100])
        {int i=0;
      int len =0;
     while(hexVal[i]!= '\0')
         { len++;
         i++;}
		bool flag=0;
        for(int j=0; j<len; j++)
        {      if(!isxdigit(hexVal[j]))
                   {flag=1;
                   break;
	                    	}}
	        if (flag)
	        {cout<<"\n\t Entered Number Is Not In Hexadecimal Range \n ";
			}
			return flag;
		}
		
 int rem_chk;
	  	
  int bin_chk(int num)
	 { while(num!=0)
         {rem_chk=num%10;
            if(rem_chk==0 || rem_chk==1)
                {num=num/10;}
              else
                 {cout<<"\n\t Entered Number Is Not In Binary Range \n";
             	break;}}
        return num;}
        
   int oct_chk(int num)
   {if(num<0)
   cout<<"\n\t Entered Number Is Not In Octal Range \n";
   else
     {while(num!=0)
          {rem_chk=num%10;
             if(rem_chk !=8 && rem_chk !=9)
               {num=num/10;}
             else 
                {cout<<"\n\t Entered Number Is Not In Octal Range \n";
            	break;}}}
        return num;}

/************************************ ASCII CODE CONVERTER *********************************************************/    
  int ascii(char code)
	  {cout<<"\n\t\t *--*--*--* ASCII CODE CONVERTER *--*--*--* ";
       cout<<"\n\n\n\t Enter Any Character :\t";
       cin>>code;
    int a=code;
       cout<<"\n\n\t ASCII Code of "<<code<<" is =\t"<<a;
	   return a;}
	
	 int i,j,decimalResult,x,y;
      char operation;
	   
/************************************ OPERATIONS ON DECIMAL *********************************************************/	
  void dec_arith(float i, float j)
	  {
     cout<<"\n\n\t\t\t*--*--*--* WELCOME TO ARITHMETIC OPERATIONS ON DECIMAL NUMBERS *--*--*--*";
	 cout<<"\n\n\n\t Enter First Decimal Number \n\n\t ";
	 cin>>i;
	 cout<<"\n\t Enter Second Decimal Number \n\n\t ";
	 cin>>j;
	cout<<"\n\t Which Arithematic Operation You Want To Perform? (i.e.+,-,/,*)"<<endl<<"\t Enter the sign of operation = ";
	 cin>>operation;
              switch(operation)
               {case '+':
                  cout<< "\n\t The Result Of Addition is = "<<i+j;
                   break;
               case '-':
                   cout<<"\n\t The Result Of Subtraction  = "<<i-j;
	              break;
	             case '*':
                    cout<<"\n\t The Result Of Multiplication is = "<<i*j;
	             break;
	           case '/':
                   cout<<"\n\t The Result Of Division is = "<<i/j;
	             break;
	           default: 
                  cout<<"\n\t Sorry! You didn't select the correct sign ";
	             break;}}

  /************************************ OPERATIONS ON BINARY *********************************************************/     
  void bin_arith(int num1, int num2)
     {   
	     cout<<"\n\n\t\t\t*--*--*--* WELCOME TO ARITHMETIC OPERATIONS ON BINARY NUMBERS *--*--*--*";
     	 cout<<"\n\n\n\t Enter First Binary Number \n\n\t ";
	     cin>>num1;
	     x=bin_chk(num1);
	     if(x==0)
	     {cout<<"\n\t Enter Second Binary Number \n\n\t ";
	     cin>>num2;
	     y=bin_chk(num2);
	     if(y==0)
{cout<<"\n\t Which Arithematic Operation You Want To Perform? (i.e.+,-,/,*)"<<endl<<"\t Enter the sign of operation = ";
	    cin>>operation;
        i=bin_dec(num1);
        j=bin_dec(num2);
           if(operation=='+')  decimalResult=i+j;
           if(operation=='-')  decimalResult=i-j;
           if(operation=='*')  decimalResult=i*j; 
           if(operation=='/')  decimalResult=i/j;
	         bitset<8> x(decimalResult);
	       switch(operation)
                {case '+':
                   cout<<"\n\t The Result Of Addition is = "<<x;
                    break;
                 case '-':
                    cout<<"\n\t The Result Of Subtraction By Two's Complement = "<<x;
	               break;
	             case '*':
                  cout<<"\n\t The Result Of Multiplication is = "<<x;
	                break;
	             case '/':
                   cout<<"\n\t The Result Of Division is :\n\n\t Quotient = "<<x<<"\n\n\t Remainder = "<<dec_bin(i%j);
	               break;
	              default: 
                    cout<<"\n\t Sorry! You didn't select the correct sign ";}}}}
                    
  /************************************ OPERATIONS ON OCTAL *********************************************************/                  
  void oct_arith(int num1, int num2)
      {
       cout<<"\n\n\t\t\t*--*--*--* WELCOME TO ARITHMETIC OPERATIONS ON OCTAL NUMBERS *--*--*--*";
       cout<<"\n\n\n\t Enter First Octal Number \n\n\t ";
	   cin>>num1;
	   x=oct_chk(num1);
	   if(x==0)
	   {cout<<"\n\t Enter Second Octal Number \n\n\t ";
	   cin>>num2;
        y=oct_chk(num2);
    	if(y==0)
	{cout<<"\n\t Which Arithematic Operation You Want To Perform? (i.e.+,-,/,*)"<<endl<<"\t Enter the sign of operation = ";
	    cin>>operation;
        i=oct_dec(num1);
        j=oct_dec(num2);
         if(operation=='+')  decimalResult=i+j;
         if(operation=='-')  decimalResult=i-j;
         if(operation=='*')  decimalResult=i*j; 
         if(operation=='/')  decimalResult=i/j;
	       if (dec_oct(decimalResult)>=0)
	         {switch(operation)
                 {case '+':
                 cout<<"\n\t The Result Of Addition is = "<<dec_oct(decimalResult);
                  break;
                 case '-':
                 cout<<"\n\t The Result Of Subtraction  = "<<dec_oct(decimalResult);
	               break;
	             case '*':
                 cout<<"\n\t The Result Of Multiplication is = "<<dec_oct(decimalResult);
	               break;
	             case '/':
 cout<<"\n\t The Result Of Division is :\n\n\t Quotient = "<<dec_oct(decimalResult)<<"\n\n\t Remainder = "<<dec_oct(i%j);
	              break;
	             default: 
                  cout<<"\n\t Sorry! You didn't select the correct sign ";
	             break;}}
			else
			cout<<"\n\t Negative Result Is Not In Octal Range ";}}}
	             

	             
/************************************ OPERATIONS ON HEXADECIMAL ***************************************************/	    
  void hex_arith(char num1[100], char num2[100])
      {int i,j,decimalResult;
       char operation;
       cout<<"\n\n\t\t\t*--*--*--* WELCOME TO ARITHMETIC OPERATIONS ON HEXADECIMAL NUMBERS *--*--*--*";
       cout<<"\n\n\n\t Enter First Hexadecimal Number \n\n\t ";
	   cin>>num1;
	   int x=hex_chk(num1);
	   if(x==0)
	   {cout<<"\n\t Enter Second Hexadecimal Number \n\n\t ";
	   cin>>num2;
        int y=hex_chk(num2);
    	if( y==0)
	{cout<<"\n\t Which Arithematic Operation You Want To Perform? (i.e.+,-,/,*)"<<endl<<"\t Enter the sign of operation = ";
	    cin>>operation;
        i=hex_dec(num1);
        j=hex_dec(num2);
         if(operation=='+')  decimalResult=i+j;
         if(operation=='-')  decimalResult=i-j;
         if(operation=='*')  decimalResult=i*j; 
         if(operation=='/')  decimalResult=i/j; 
          dec_hex(decimalResult);}}}
	             
	 char option;
	  int num,b; 
	  
/************************************ CALL OF DEC CONVERTER'S FUNCTIONS **************************************************/ 
  void dec_converter()
	     {
	     cout<<"\n\n\t\t\t*--*--*--* WELCOME TO DECIMAL NUMBER SYSTEM *--*--*--*\n\n";
	     cout<<"\n\t PRESS 'A' TO CONVERT DECIMAL TO BINARY \t";
	     cout<<"\n\n\t PRESS 'B' TO CONVERT DECIMAL TO OCTAL \t";
	     cout<<"\n\n\t PRESS 'C' TO CONVERT DECIMAL TO HEXADECIMAL \n\n\t ";
	     cin>>option;
	     system("cls");
	        if(option== 'A')
	  	      {cout<<"\n\t\t/***/*** DECIMAL TO BINARY CONVERTER ***/**/*";
	  	      cout<<"\n\n\t Enter A Decimal Number\n\n\t ";
	          cin>>num;
	           bitset<8> x(num);
	           cout<<"\n\t Equivalent of "<<num<<" in Binary =  "<<x;}
	         else if(option=='B')
	  	      {cout<<"\n\t\t/***/*** DECIMAL TO OCTAL CONVERTER ***/***/";
	          cout<<"\n\n\t Enter A Decimal Number\n\n\t ";
	          cin>>num;
	           if(num>=0)
	  	      cout<<"\n\t Equivalent of "<<num<<" in Octal =  "<<dec_oct(num);
			   else
			 cout<<"\n\t Negative Decimal Numbers Cannot Convert Into Octal Because No Any Accurate Method Is Available";}
	         else if (option== 'C')
            	{cout<<"\n\t\t/***/*** DECIMAL TO HEXADECIMAL CONVERTER ***/**/*";
	        	cout<<"\n\n\t Enter A Decimal Number\n\n\t ";
	            cin>>num;
	             if(num>0)
	             dec_hex(num);
	             else if(num==0)
	             cout<<"\n\t Equivalent Answer In Hexadecimal = 0";
			     else
	cout<<"\n\t Negative Decimal Numbers Cannot Convert Into Hexadecimal Because No Any Accurate Method Is Available";}
	  	      else
               {cout<<"\n\t Sorry! You didn't select the correct option ";}}
      
/************************************ CALL OF BIN CONVERTER'S' FUNCTION*************************************************/         
	  void bin_converter()
      {
      cout<<"\n\n\t\t\t*--*--*--* WELCOME TO BINARY NUMBER SYSTEM *--*--*--*\n\n";
      cout<<"\n\t PRESS 'D' TO CONVERT BINARY TO DECIMAL \t";
	  cout<<"\n\n\t PRESS 'E' TO CONVERT BINARY TO OCTAL \t";
	  cout<<"\n\n\t PRESS 'F' TO CONVERT BINARY TO HEXADECIMAL \n\n\t ";
	  cin>>option;
	  system("cls");
	  	switch(option)
	          { 
	     case 'D':
	       	 cout<<"\n\t\t/***/*** BINARY TO DECIMAL CONVERTER ***/***/";
	         cout<<"\n\n\t Enter A Binary Number \n\n\t ";
             cin>>num;
         	 b=bin_chk(num);
         	 if(b==0)
         	 cout<<"\n\t Equivalent of "<<num<<" in Decimal =  "<<bin_dec(num);
	  	      break;
	     case 'E':
	    	 cout<<"\n\t\t/***/*** BINARY TO OCTAL CONVERTER ***/***/";
	  	     cout<<"\n\n\t Enter A Binary Number\n\n\t ";
	  	     cin>>num;
	  	     b=bin_chk(num);
         	 if(b==0)
         	 cout<<"\n\t Equivalent of "<<num<<" in Octal =  "<<bin_oct(num);
	  	      break;
	     case 'F':
	  	     cout<<"\n\t\t/***/*** BINARY TO HEXADECIMAL CONVERTER ***/***/";
	  	     cout<<"\n\n\t Enter A Binary Number\n\n\t ";
	  	     cin>>num;
	         b=bin_chk(num);
         	 if(b==0)
             bin_hex(num);
	  	     break;
		 default: 
             cout<<"\n\t Sorry! You didn't select the correct option ";}}
  
 /********************************** CALL OF OCTAL CONVERTER'S FUNCTION **************************************************/ 
   void oct_converter() 
	  {
	  cout<<"\n\n\t\t\t*--*--*--* WELCOME TO OCTAL NUMBER SYSTEM *--*--*--*\n\n";           
	  cout<<"\n\t PRESS 'G' TO CONVERT OCTAL TO DECIMAL \t";
	  cout<<"\n\n\t PRESS 'H' TO CONVERT OCTAL TO BINARY \t";
	  cout<<"\n\n\t PRESS 'I' TO CONVERT OCTAL TO HEXADECIMAL \n\n\t ";
	  cin>>option;
	  system("cls");
	     switch(option)
	         {
	      case 'G':
		       cout<<"\n\t\t/***/*** OCTAL TO DECIMAL CONVERTER ***/***/";
		       cout<<"\n\n\t Enter A Octal Number\n\n\t ";
	           cin>>num;
	              b=oct_chk(num);
	                    if(b==0)
	                    cout<<"\n\t Equivalent of "<<num<<" in Decimal =  "<<oct_dec(num);
	           break;
       	  case 'H':
	  	      cout<<"\n\t\t/***/*** OCTAL TO BINARY CONVERTER ***/***/";
	  	      cout<<"\n\n\t Enter A Octal Number\n\n\t ";
	  	      cin>>num;
	  	       b=oct_chk(num);
	                if(b==0)
	                  cout<<"\n\t Equivalent of "<<num<<" in Binary =  "<<oct_bin(num);
	  	      break;
	      case 'I':
	  	     cout<<"\n\t\t/***/*** OCTAL TO HEXADECIMAL CONVERTER ***/***/";
	  	     cout<<"\n\n\t Enter A Octal Number\n\n\t ";
	  	     cin>>num;
	  	        b=oct_chk(num);
	                if(b==0)
	                   oct_hex(num);
	  	      break;
		  default: 
              cout<<"\n\t Sorry! You didn't select the correct option ";}}
              
 /******************************** CALL OF HEX CONVERTER'S FUNCTION **************************************************/             
  void hexa_converter()
     {
	 cout<<"\n\n\t\t\t*--*--*--* WELCOME TO HEXADECIMAL NUMBER SYSTEM *--*--*--*\n\n";
	 cout<<"\n\n\t PRESS 'J' TO CONVERT HEXADECIMAL TO DECIMAL \t";
	 cout<<"\n\n\t PRESS 'K' TO CONVERT HEXADECIMAL TO BINARY \t";
	 cout<<"\n\n\t PRESS 'L' TO CONVERT HEXADECIMAL TO OCTAL \n\n\t ";
	 cin>>option;
	 system("cls");
	      switch(option)
           	 {char hex_num[100];
           	 
	     case 'J':
	  	     cout<<"\n\t\t/***/*** HEXADECIMAL TO DECIMAL CONVERTER ***/***/";
	  	     cout<<"\n\n\t Enter A Hexadecimal Number\n\n\t ";
	  	     cin>>hex_num;
	  	     b=hex_chk(hex_num);
	  	     if(b==0)
			 cout<<"\n\t Equivalent of "<<hex_num<<" in Decimal =  "<<hex_dec(hex_num);
	  	      break;
	     case 'K':
	  	     cout<<"\n\t\t/***/*** HEXADECIMAL TO BINARY CONVERTER ***/***/";
	  	     cout<<"\n\n\t Enter A Hexadecimal Number\n\n\t ";
	  	     cin>>hex_num;
	  	     b=hex_chk(hex_num);
	  	     if(b==0)
	  	    cout<<"\n\t Equivalent of "<<hex_num<<" in Binary =  "<<hex_bin(hex_num);
	  	     break;
	      case 'L':
	  	     cout<<"\n\t\t/***/*** HEXADECIMAL TO OCTAL CONVERTER ***/***/";
	  	     cout<<"\n\n\t Enter A Hexadecimal Number\n\n\t ";
	  	     cin>>hex_num;
	  	     b=hex_chk(hex_num);
	  	     if(b==0)
	  	     cout<<"\n\t Equivalent of "<<hex_num<<" in Octal =  "<<hex_oct(hex_num);
	  	      break;
	  	   default: 
              cout<<"\n\t Sorry! You didn't select the correct option ";
				}}	

 /*********************************** THANKS **********************************************/  
