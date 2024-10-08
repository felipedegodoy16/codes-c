#include <stdio.h>
 
int main() {
 
    int seg, h, m, s;
    
    scanf("%d", &seg);
    h = seg / (60*60);
    m = (seg - (h *60 *60)) /60;
    s = seg - (m *60 + h *60 *60);
    
    printf("%d:%d:%d\n", h, m, s);
 
    return 0;
}
