long long gcdll(long long a,long long b){while(b){a%=b;swap(a,b);}return a;}
long long lcmll(long long a,long long b){return a/gcdll(a,b)*b;}