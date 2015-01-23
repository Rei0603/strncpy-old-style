char *strncpy(char *dst,const char *src,size_t n)
{
    size_t i;
    char *p = dst;
    /* コピー本体の古い書き方例 */
    for(i=0; (i<n)&&(*src); i++){
        *dst++ = *src++;
    }
    /* 0埋め */ 
    for(;i<n; i++){*dst++ = 0;}
    return(p);
}
