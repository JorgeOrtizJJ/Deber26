#include <iostream>
#include <fstream>
void lectura ();
using namespace std;
int main() {
  char eleccion1;
  string date;
  int pre1,pre2,pre3,pre4;
  float e1,e2,e3,e4,vehiculo,accesorios,valores,cbase,factura,dinero, pp1, pp2, pp3, pp4;
  e1=0;
  e2=0;
  e3=0;
  e4=0;
  ofstream doc;
  doc.open("Poliza.txt",ios::out);
  do{
  cout<<"a. Cobertura Amplia:"<<endl;
  cout<<"b.Cobertura Minima:"<<endl;
  cout<<"c.lectura"<<endl;
  cout<<"d.Salir"<<endl;
  cout<<" Que poliza desea:"<<endl;
  doc<<" Que poliza desea:"<<endl;
  doc<<eleccion1;
  cin>>eleccion1;
  switch(eleccion1)
  {
    case'a':case'A':
    cout<<"Ingrese el valor del veiculo:"<<endl;
    cin>>vehiculo;
    doc<<"Ingrese el valor del veiculo:"<<endl;
    doc<<vehiculo;
    if(vehiculo>=1200){
    cout<<"Usted consume alcohol....1.si o 2.no:"<<endl;
  cin>>pre1;
  cout<<"Usted tiene fallas de vista....1.si o 2.no:"<<endl;
  cin>>pre2;
  cout<<"Usted posee alguna discapacidad...si o no:"<<endl;
  cin>>pre3;
  cout<<"Cuantos años tiene usted"<<endl;
  cin>>pre4;
  doc<<"Usted consume alcohol....1.si o 2.no:"<<endl;
  doc<<pre1;
  doc<<"Usted tiene fallas de vista....1.si o 2.no:"<<endl;
  doc<<pre2;
  doc<<"Usted posee alguna discapacidad...si o no:"<<endl;
  doc<<pre3;
  doc<<"Cuantos años tiene usted"<<endl;
  doc<<pre4;
  if(pre1==1)
  {
    pp1=vehiculo*0.10;
  }
  if(pre2==1)
  {
    pp2=vehiculo*0.05;
  }
  if(pre3==1)
  {
    pp3=vehiculo*0.05;
  }
  if(pre4==1)
  {
    pp4=vehiculo*0.20;
  }
  else {
    pp4=vehiculo*0.10;
  }
  dinero=pp1+pp2+pp3+pp4+cbase;
  factura=dinero+vehiculo;
  cout<<"El valor a pagar por la poliza" ""<<" seleccionada es " ""<<eleccion1<<" es:"<<dinero<<endl;
  cout<<"Valor facturado es" ""<<factura<<endl;
  doc<<"El valor a pagar por la poliza" ""<<" seleccionada es " ""<<eleccion1<<" es:"<<dinero<<endl;
  doc<<"Valor facturado es" ""<<factura<<endl;
    }
    else {
      cout<<"Poliza no sera efectuada"<<endl;
      doc<<"Poliza no sera efectuada"<<endl;
    }
    break;
    case'b':case'B':
    cout<<"Ingrese el valor del vehiculo:"<<endl;
    cin>>vehiculo;
    doc<<"Ingrese el valor del vehiculo:"<<endl;
    doc<<vehiculo;
    if(vehiculo>=950){
    cout<<"Usted consume alcohol....1.si o 2.no:"<<endl;
  cin>>pre1;
  cout<<"Usted tiene fallas de vista....1.si o 2.no:"<<endl;
  cin>>pre2;
  cout<<"Usted posee alguna discapacidad...si o no:"<<endl;
  cin>>pre3;
  cout<<"Cuantos años tiene usted"<<endl;
  cin>>pre4;
  doc<<"Usted consume alcohol....1.si o 2.no:"<<endl;
  doc<<pre1;
  doc<<"Usted tiene fallas de vista....1.si o 2.no:"<<endl;
  doc<<pre2;
  doc<<"Usted posee alguna discapacidad...si o no:"<<endl;
  doc<<pre3;
  doc<<"Cuantos años tiene usted"<<endl;
  doc<<pre4;

  if(pre1==1)
  {
    pp1=vehiculo*0.10;
  }
  if(pre2==1)
  {
    pp2=vehiculo*0.05;
  }
  if(pre3==1)
  {
    pp3=vehiculo*0.05;
  }
  if(pre4>=40)
  {
    pp4=vehiculo*0.20;
  }
  else {
    pp4=vehiculo*0.10;
  }
  dinero=pp1+pp2+pp3+pp4+vehiculo;
   factura=dinero+vehiculo;
  cout<<"El valor a pagar por la poliza" ""<<" seleccionada es " ""<<eleccion1<<" es:"<<dinero<<endl;
  cout<<"Valor facturado es" ""<<factura<<endl;
  doc<<"El valor a pagar por la poliza" ""<<" seleccionada es " ""<<eleccion1<<" es:"<<dinero<<endl;
  doc<<"Valor facturado es" ""<<factura<<endl;
    }
    else{
      cout<<"No se ejecutara este pedido"<<endl;
      doc<<"No se ejecutara este pedido"<<endl;
    }
    break;
    case 'c':case 'C':
    cin.ignore();
    lectura();
    break;

    case 'd': case 'D':
    cout<<"Gracias por comprar"<<endl;
    doc<<"Gracias por comprar"<<endl;
default:
cout<<"No entiendo"<<endl;
doc<<"No entiendo"<<endl;

  }
  
  
  }while(eleccion1!='d');
  doc.close();
}
void lectura(){
  ifstream doc1;
  string test;
  doc1.open("Poliza.txt",ios::in);
  if(doc1.fail()){
    cout<<"Warning"<<endl;
  }
  else{
    while(!doc1.eof()){
      getline(doc1,test);
      cout<<test<<endl;
    }
  }
  doc1.close();
}