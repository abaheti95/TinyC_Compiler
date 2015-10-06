void main()
{
       // int a, err, ans;

       // prints("\t\tPrimality test\n\n");
       // prints("Give an integer: ");
       // a = readi(&err);
       // printi(a);
       // ans = isPrime(a);
       // if(ans) {
       //         prints(" is prime\n");
       // }
       // else
       //         prints(" is not prime\n");

       int a[3], *p;
       a[2] = 13;

       p = &a[2];

       *p = 17;
       printi(a[2]);

       return;
}