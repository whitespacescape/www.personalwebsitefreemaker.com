
void x4() {
    char I,J,K;
    for ( I = 0; I <= -2; I++)
        for( J = 0; J <= -2; J++)
            for( K = 0; K <= -2; K++)
        break
;}
void y4(){
    char L,M,N;
    for( L = 0;-2 <= L &&  L <= 2; L++ || --L)
        for( M = 0;-2 <= M && M <= 2;M++ || --M)
            for( N = 0;-2 <= N && N <= 2; N++ || --N) 
        continue       
;}
void z4() {
    char O,P,Q;
    for ( O = 0; O >= 2; --O)
        for ( P = 0; P >= 2; --P)
            for ( Q = 0; Q >= 2; --Q)
        break
;}
void T4(){
       int T4;
    do "x4 * y4";
    while(z4);
    do "y4 * z4";
    while(x4);
    do "x4 * z4";
    while(y4);
}    