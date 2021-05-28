//hackerRank submitted code given below

//1st code with runtime error
#include<stdio.h>

int main()
{
    int t,i,j,k;
    long long int n ,arr[100000];
    int bribe;
    scanf("%d",&t);
    for(k=0;k<t;k++){
        bribe=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }

    for(j=n-1;j>=0;j--)
    {

        if(arr[j]!=j+1)
        {
            if(j-1>=0 && arr[j-1]==j+1)
            {
                arr[j-1]=arr[j];
                arr[j]=j+1;
                bribe++;

            }
            else if(j-2>=0 && arr[j-2]==j+1)
            {
                arr[j-2]=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=j+1;
                bribe=bribe+2;

            }
            else {
                printf("Too chaotic\n");
                break;

            }
        }
    }

    printf("%d\n",bribe);

    }
}


//Code with no error
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    int bribe=0;
    int pos = q.size();

    for(int i=pos-1;i>=0;i--)
    {
        if(q[i]!=i+1)
        {
            if(i-1>=0 && q[i-1]==i+1)
            {
                q[i-1]=q[i];
                q[i]=i+1;
                bribe++;

            }
            else if(i-1>=0 && q[i-2]==i+1)
            {
                q[i-2]=q[i-1];
                q[i-1]=q[i];
                q[i]=i+1;
                bribe=bribe+2;

            }
            else{
                cout<<"Too chaotic"<<endl;
                return;
            }
        }
    }
    cout<<bribe<<endl;

}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string q_temp_temp;
        getline(cin, q_temp_temp);

        vector<string> q_temp = split_string(q_temp_temp);

        vector<int> q(n);

        for (int i = 0; i < n; i++) {
            int q_item = stoi(q_temp[i]);

            q[i] = q_item;
        }

        minimumBribes(q);
    }

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

