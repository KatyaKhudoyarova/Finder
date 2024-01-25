#ifndef PERSON_H
#define PERSON_H
#include <QDate>




class Person{

public:
    Person();

protected:
    int Index = 0;
    int basicGroupSize =1;
    int groupSize =1;
    QString* Name = new QString[basicGroupSize];
    QString* Date = new QString[basicGroupSize];
    QString* PhoneNum = new QString[basicGroupSize];
    QString* Adress = new QString[basicGroupSize];
    QString* GroupNum = new QString[basicGroupSize];

public:
    int GetGroupSize() const;
    void SetGroupSize(int newGroupSize);



    void SetName(int position, QString newName){
        QString getName(int position);
    }
    void SetDay(int position, QString newDay){
        QString getDay(int position);
    }
    void SetMonth(int position, QString newMonth){
        QString getMonth(int position);
    }
    void SetYear(int position, QString newYear){
        QString getYear(int position);
    }
    void SetDate(int position, QString newDate){
        QString getDate(int position);
    }
    void SetPhone(int position, QString newPhone){
        QString getPhone(int position);
    }
    void SetAdress(int position, QString newAdress){
        QString getAdress(int position);
    }

    void SetGroupNum(int position, QString newGroupNum){
        QString getGroupNum(int position);
    }
    void resize(int*& arr);
    void resize(QString*& arr);
    void resize(QDate*& arr);
    void resize();


    void setIndex( int newIndex);
        int getIndex();
        void IndexIncr();
        void IndexDecr();


        ~Person();
};


#endif // PERSON_H
