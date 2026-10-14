#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct course
    {
        string subname;
        int submarks;
        int crdthourse;
        
    };
struct semesterData
{
    int totalCrdthourse = 0;
    float totalGradepoints = 0;
    int totalmarks = 0;
};

void calGradePoints(vector<course> &vec, vector<semesterData> &data) {
    semesterData d;
    for(int i=0; i<vec.size(); i++) {
        if(vec[i].submarks >= 85 && vec[i].submarks <= 100) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : A"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<4.0*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(4.0);
            d.totalmarks += vec[i].submarks;
        }else if(vec[i].submarks >= 80 && vec[i].submarks <= 84) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : A-"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<3.67*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(3.67);
            d.totalmarks += vec[i].submarks;
        }else if(vec[i].submarks >= 75 && vec[i].submarks <= 79) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : B+"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<3.33*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(3.33);
            d.totalmarks += vec[i].submarks;
        }else if(vec[i].submarks >= 71 && vec[i].submarks <= 74) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : B"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<3.0*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(3.0);
            d.totalmarks += vec[i].submarks;
        }else if(vec[i].submarks >= 68 && vec[i].submarks <= 70) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : B-"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<2.67*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(2.67);
            d.totalmarks += vec[i].submarks;
        }else if(vec[i].submarks >= 64 && vec[i].submarks <= 67) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : C+"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<2.33*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(2.33);
            d.totalmarks += vec[i].submarks;
        }else if(vec[i].submarks >= 61 && vec[i].submarks <= 63) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : C"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<2.0*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(2.0);
            d.totalmarks += vec[i].submarks;
        }else if(vec[i].submarks >= 58 && vec[i].submarks <= 60) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : C-"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<1.67*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(1.67);
            d.totalmarks += vec[i].submarks;
        }else if(vec[i].submarks >= 54 && vec[i].submarks <= 57) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : D+"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<1.33*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(1.33);
            d.totalmarks += vec[i].submarks;
        }else if(vec[i].submarks >= 50 && vec[i].submarks <= 53) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : D"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<1.00*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(1.00);
            d.totalmarks += vec[i].submarks;
        }else if(vec[i].submarks < 49) {
            cout<<"Subject : "<<vec[i].subname<<endl;
            cout<<"Obtained marks : "<<vec[i].submarks<<endl;
            cout<<"Grade is : F"<<endl;
            cout<<"Credit hourse is : "<<vec[i].crdthourse<<endl;
            cout<<"Grade points is : "<<0.00*(vec[i].crdthourse)<<endl;
            d.totalCrdthourse += vec[i].crdthourse; 
            d.totalGradepoints += (vec[i].crdthourse)*(0.00);
            d.totalmarks += vec[i].submarks;
        }else {
            cout<<vec[i].subname<<" marks is invalid.\n";
        }
    }
    data.push_back(d);
    
}
float calSgpa(vector<semesterData> data, vector<float> &vec) {
    float sgpa;
    for(int i=0; i<data.size(); i++) {
        sgpa = data[i].totalGradepoints/data[i].totalCrdthourse;
        vec.push_back(sgpa);
    }
    return sgpa;
}
float calCgpa(vector<semesterData> data, vector<float> vec) {
    float qualityPoints = 0, cgpa;
    int sumAllcrdt = 0;
    for(float i=0; i<vec.size(); i++) {
        qualityPoints += vec[i]*data[i].totalCrdthourse;
        sumAllcrdt += data[i].totalCrdthourse;
    }

    cgpa = qualityPoints/sumAllcrdt;
    return cgpa;
    
}

int main() {

    vector<course> courses;
    vector<semesterData> data;
    vector<float> storeSgpa;
    int numbercourses;
    cout<<"Enter your subjects lemit: ";
    cin>>numbercourses;
    for(int i=0; i<numbercourses; i++) {
        course c;
        cin.ignore();
        cout<<"Enter subject name: ";
        getline(cin, c.subname);
        cout<<"Enter youre "<<c.subname<<" marks: ";
        cin>>c.submarks;
        cout<<"Enter your "<<c.subname<<" credit hourse: ";
        cin>>c.crdthourse;
        courses.push_back(c);
    }
    system("cls");
    cout<<" \ncourses details is below:\n";
    calGradePoints(courses,data);
    cout<<" \nyour SGPA is = "<<calSgpa(data,storeSgpa);
    cout<<" \nyour CGPA is = "<<calCgpa(data, storeSgpa)<<endl;
    

    //percentage.
    for(auto val : data) {
        float percent = (static_cast<float>(val.totalmarks)/(numbercourses*100))*100;
        cout<<"Percentage is = "<<percent;
        break;
    }

    return 0;


}
