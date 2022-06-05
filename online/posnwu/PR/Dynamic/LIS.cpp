#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int t, n, a[N];
int max_cons;

void cum() {
  max_cons=1-0xf7777777;
  for(int i=0; i<n; i++) {
    
  }
  cout << max_cons;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  cin >> t;
  while(t--) {
    cin >> n;
    for(int i=0; i<n; i++) {
      cin >> a[i];
    }
    cum();
  }

  return 0;
}

// I’d just like to interject for a moment. What you’re refering to as Linux, is in fact, GNU/LInux, or as I’ve recently taken to calling it, GNU plus Linux. Linux is not an operating system unto itself, but rather another free component of a fully functioning GNU system made useful by the GNU corelibs, shell utilities and vital system components comprising a full OS as defined by POSIX. Many computer users run a modified version of the GNU system every day, without realizing it. Through a peculiar turn of events, the version of GNU which is widely used today is often called “Linux”, and many of its users are not aware that it is basically the GNU system, developed by the GNU Project. There really is a Linux, and these people are using it, but it is just a part of the system they use. Linux is the kernel: the program in the system that allocates the machine’s resources to the other programs that you run. The kernel is an essential part of an operating system, but useless by itself; it can only function in the context of a complete operating system. Linux is normally used in combination with the GNU operating system: the whole system is basically GNU with Linux added, or GNU/Linux. All the so-called “Linux” distributions are really distributions of GNU/Linux