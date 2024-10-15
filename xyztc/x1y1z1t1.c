void x1() {
    char i,j,k;
    for ( i = 0; i <= 3; ++i)
        for( j = 0; i <= 3; ++j)
            for( k = 0; k <= 3; ++k)
        continue
;}
void y1(){
    char l,m,n;
    for( l = 0;-3 <= l && l <= 3; ++l || l--)
       for( m = 0;-3 <= m && m <= 3 ;++m || m--)
          for( n = 0 ;-3 <= n && n <= 3;++n || n--)
        break
;}
void z1(){
    char o,p,q;
    for( o = 0;o >= 3;o--)
        for( p = 0; p >= 3;p--)
            for( q = 0; q >= 3; q--)
        continue
;}
void T1(){
       int T1;
    do "x1 * y1";
    while(z1);
    do "y1 * z1";
    while(x1);
    do "x1 * z1";
    while(y1);
}