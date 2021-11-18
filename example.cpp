#include <bits/stdc++.h>
 
#define f(a,b,i) for(int i=a;i<b;i++)
#define g(a,b,i) for(int i=b-1;i>=a;i--)
// #define int long long
#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define CIN(a,x,y) for(int i=x;i<y;i++) cin>>a[i];
#define float double
#define M 1000000007
#define MAX INT_MAX
#define MIN INT_MIN
#define all(a) (a).begin(), (a).end()
using namespace std;
#define fi first
#define sp(n) setprecision(n)
#define se second
#define in insert
#define lb lower_bound
#define ub upper_bound
#define pi pair<int,int>
#define bp(n) __builtin_popcountll(n) 
// #define maxn 1000006
const int maxn=200100;
const int mod=1e9+7;
const int N=2e5+5;

class Node{
public: 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);

    if(head == NULL){
        head = new_node;
        return;
    }

    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }

    temp->next = new_node;
}

void display(Node* head){
    Node* temp = head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);

    new_node->next = head;

    head = new_node;
}

void deleteAtHead(Node* &head){
    Node* to_delete = head;
    head = head->next;

    delete to_delete;
}

void deletion(Node* &head, int val){
    if(head == NULL) return;

    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }

    Node* temp = head;

    while(temp->next && temp->next->data != val){
        temp = temp->next;
    }

    if(temp->next==NULL){
        return;
    }

    Node* to_delete = temp->next;

    temp->next = temp->next->next;

    delete to_delete;
}

void solve() {
    Node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    insertAtHead(head,5);

    display(head);

    deletion(head, 6);

    display(head);

    deleteAtHead(head);

    display(head);

}

signed main(){
    FAST_IO
    // #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    // freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    // freopen("output.txt", "w", stdout);
    // #endif
    int t; t=1;
    // cin>>t;

    while(t--){
        //solve();
        solve();
        //if(flag) return 0;
    }
}