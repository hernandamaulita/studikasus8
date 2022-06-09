#include<iostream>
using namespace std;

class mahasiswa{
    private :
    float  baris,kolom;
    float  arr[10][10];
	int i,j,k;
	float  rata1,rata2,rata3,total3,total1,total2;
	
    public:
    void input(){     //....................

        cout<<"========================================================"<<endl;
        cout<<"============DATA KELULUSAN MAHASISWA===================="<<endl;
        cout<<"========================================================"<<endl;


//========================================================nilai==================================;
        cout<<endl;

        cout<<"masukan jumlah baris :";cin>>baris;
        cout<<"masukan jumlah kolom :";cin>>kolom;
		
		for(i=0;i<baris;i++){
			for(j=0;j<kolom;j++){
				
				cout<<"masukan isi kolom "<<j<<":";cin>>arr[i][j];
		}
			cout<<endl;
		}
		// menampilakan input array 
		
	

    }
    
    void proses(){
    	
    	
    	
    	
    	
    	cout<<"output nilai yang di tampilkan "<<endl;
    	
    	cout<<"====================================================================================================="<<endl;
    	cout<<"TAHUN PRODI"<<"||"<<"\t TEHNIK KOMPUTER"<<"||"<<"\t TEHNIK ELETRO"<<"||"<<"\t TEHNIK PEMESINAN"<<"||"<<"\t RATA-RATA PERTAHUN"<<endl;
    		
    	
		for(i=0;i<baris;i++){
			for(j=0;j<kolom;j++){
				cout<<arr[i][j]<<" \t\t\t\t";
		}
			cout<<endl;
		}
	}
	void rata(){
		// pengitungan rata rata pertahun per//
	
		rata1 =(arr[0][1]+arr[1][1]+arr[2][1])/3;
		rata2 =(arr[0][2]+arr[1][2]+arr[2][2])/3;
		rata3 =(arr[0][3]+arr[1][3]+arr[2][3])/3;
		
		
		cout<<" rata rata pertahun perprodi tehnik komputer  :"<<rata1<<endl;
		cout<<"rata rata pertahun perprodi tehnik elektro    :"<<rata2<<endl;
		cout<<"rata rata pertahun perprodi tehnik pemesinan  :"<<rata3<<endl;
		
		cout<<endl;
		
		// penghitungan pertahun semua prodi //
        
        total1=0;
        total2=0;
        total3=0;
		
		total1=(arr[0][1]+arr[0][2]+arr[0][3])/3;
		total2=(arr[1][1]+arr[1][2]+arr[1][3])/3;
		total3=(arr[2][1]+arr[2][2]+arr[2][3])/3;
		
		cout<<"rata rata pertahun semua prodi ke-			"<<arr[0][0]<<" :"<<total1<<endl;
		cout<<"rata rata pertahun semua prodi ke-			"<<arr[1][0]<<" :"<<total2<<endl;
		cout<<"rata rata pertahun semua prodi ke-           "<<arr[2][0]<<" :"<<total3<<endl;
		
		
		
		
	}
	
	

};

int main(){
    mahasiswa mhs ;
    mhs.input();
    mhs.proses();
    mhs.rata();
}