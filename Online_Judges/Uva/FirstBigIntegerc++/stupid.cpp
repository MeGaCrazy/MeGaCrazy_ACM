#include <bits/stdc++.h>
using namespace std;
const int length = 2220;
const int base = 10;
struct bignum {
	int len;
	int data[length];
	bignum() {
		memset(data, 0, sizeof(data));
		len = 0;
	}
	void clear() {
		for (int i = len; i >= 0; i--)data[i] = 0;
		len = 0;
	}
	int check(const bignum&a, const bignum&b) {
		if (a.len>b.len)return 0;
		if (b.len>a.len)return 1;
		for (int i = a.len; i >= 1; i--) {
			if (a.data[i]>b.data[i])return 0;
			if (b.data[i]>a.data[i])return 1;
		}
		return 2;
	}


	bool operator <(const bignum &b) { return check(*this, b) == 1; }
	bool operator >(const bignum &b) { return check(*this, b) == 0; }
	bool operator >=(const bignum &b) { return check(*this, b) % 2 == 0; }
	bool operator <=(const bignum &b) { return check(*this, b) >= 1; }
	bool operator !=(const bignum &b) { return check(*this, b) != 2; }
	bool operator ==(const bignum &b) { return check(*this, b) == 2; }
	bignum operator =(long long x) {
		for (int i = len; i >= 0; i--)data[i] = 0;
		len = 0;
		while (x) {
			data[++len] = x%base;
			x /= base;
		}
		return *this;
	}
	bignum operator =(const bignum &b) {
		for (int i = len; i >= 0; i--)data[i] = 0;
		for (int i = 1; i<=b.len; i++)data[++len] = b.data[i];
		return *this;
	}
	bignum(long long x) {
		memset(data, 0, sizeof(data));
		len = 0;
		*this = x;
	}
	bignum operator +(const bignum &b) {
		bignum tmp;
		int sz = max(len, b.len);
		int carry = 0;
		for (int i = 1; i <= sz; i++) {
			int cal = (data[i] + b.data[i] + carry);
			tmp.data[i] = (data[i] + b.data[i] + carry) % base;
			if ((data[i] + b.data[i] + carry) >= 10) {
				carry = 1;
			}
			else {
				carry = 0;
			}

		}
		return tmp;
	}
	bignum operator +(long long x) {
		bignum tmp;
		int carry = 0;
		int tmp_len = 0;
		for (int i = 1; (i <= len || x); i++) {
			int num = x%base;
			x /= base;
			int cal = (data[i] + num + carry);
			tmp.data[++tmp.len] = (data[i] + num + carry) % base;
			if ((data[i] + num + carry) >= 10) {
				carry = 1;
			}
			else {
				carry = 0;
			}
		}
		return tmp;
	}
	bignum operator -(const bignum &b){
	      bignum tmp;
	      
	      int sz=max(len,b.len);
	      for(int i=1;i<=sz;i++){
	          if(data[i]<b.data[i]){
	            int get=-1;
	             for(int j=len;j>i;j--){
	                 if(data[j]){data[j]--;get=j;break;}
	             }
	             for(int j=len-1;get>0&&j>i;j--){
	                 if(!data[j]){data[j]=9;}
	             }
	               if(get>0){
	                  tmp.data[++tmp.len]=(data[i]+10)-b.data[i];
	                }
	                if(get==-1){
	                  tmp.data[++tmp.len]=data[i]-b.data[i];
	                }
	          }else{
	           tmp.data[++tmp.len]=data[i]-b.data[i];
	          }
	      }
	}
	bignum operator -(long long x){
	     bignum tmp;
	     for(int i=1;(i<=len||x);i++){
	         int num=x%base;
	         x/=10;
	         if(data[i]<num){
	             int get=-1;
	             for(int j=i+1;j<=len;j++){
	                 if(data[j]){data[j]--;get=j;break;}
	             }
	             for(int j=i+1;get>0&&j<get;j++){
	                 if(!data[j]){data[j]=9;}
	             }
	             if(get>0){
         	       tmp.data[++tmp.len]=(data[i]+10)-num;
	             }
                     if(get==-1){
                       tmp.data[++tmp.len]=data[i]-num;
                     }
	         }else{
	              tmp.data[++tmp.len]=data[i]-num;
	         }
	     }
	}

	void write() {
		for (int i = len; i>=1; i--) {
			printf("%d", data[i]);
		}
	}



}a, b,c;

int main() {
	int x = 5000;
	int y=4000;
	a = (a + x);
	b=(a-y);
	b.write();

}

