char *strncpy(char *dst,const char *src,size_t n)
{
    size_t pos=0;
    char *pHot = dst;
    /* コピー本体の古い書き方例 */
    while((pos<n)&&(*src)){
        *pHot++ = *src++;
        pos++;
    }
    /* 0埋め */ 
    for(;pos<n; pos++){*pHot++ = '\0';}
    return(dst);
}
