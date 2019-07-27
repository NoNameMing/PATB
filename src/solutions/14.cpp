#include <iostream>
#include <cctype>
using namespace std;

 //string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
 //    int m = isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
 //    cout << week[t[0]-'A'];
 //    printf("%02d:%02d", m, pos);

int main(){
	int i = 0;int j = 0;int pos;
	string a, b, c, d;
	char t[2];
	cin >> a >> b >> c >> d;
	string week[7] = {"MON ","TUE ","WED ","THU ","FRI ","SAT ","SUN "};

	while(i < a.length() && i < b.length()){
		  if(a[i] == b[i] && a[i] >= 'A' && a[i] <= 'G'){
		  	 t[0] = a[i];
		  	 break;
		  }
		  i++;
	}

	i = i + 1; //从这个位置继续

	while(i < a.length() && i < b.length()){
		  if(a[i] == b[i]  && (a[i] >= 'A' && a[i] <= 'N' || isdigit(a[i]))){
		  	 t[1] = a[i]; 
		  	 break;
		  }
		  i++;
	}

	while(j < c.length() && j < d.length()){
		  if(c[j] == d[j] && isalpha(c[j])){
		  	 pos = j; 
		  	 break;
		  }
		  j++;
	}

    int	h = isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
	cout << week[t[0]-'A'];
	printf("%02d:%02d", h, pos);
    return 0;
}
