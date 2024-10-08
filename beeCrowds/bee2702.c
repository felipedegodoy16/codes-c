#include <stdio.h>
 
int main() {
 
    int c, b, m, dc, db, dm, falta, totalC=0, totalB=0, totalM=0;
    
    scanf("%d %d %d", &dc, &db, &dm);
    scanf("%d %d %d", &c, &b, &m);
    
    if(c > dc)
        totalC = c - dc;
        
	if(b > db)
        totalB = b - db;
		
	if(m > dm)
        totalM = m - dm;
        
	falta = totalM + totalB + totalC;
    
    printf("%d\n", falta);
 
    return 0;
}
