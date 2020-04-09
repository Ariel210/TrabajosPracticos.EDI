#include <iostream>
#include <list>

using namespace std;

class Contacto 
{
    private:
        string nombre;
        int telefono;
    
    public:
        Contacto(){}

        ~Contacto(){}

        void setContacto(string nom, int tel)  
        {
            nombre = nom;
            telefono = tel;
        }

        string getNombre() 
        {
            return nombre;
        }
        int getTelefono() 
        {
            return telefono;
        }
};

class Agenda 
{
    private:    
        list <Contacto> contactos;
    
    public:
        ~Agenda() {}

        void addContacto(Contacto* nContacto)
        {
            contactos.push_back(*nContacto);
        }

        void listarContactos()
        {
            cout<<"-------------------------"<<endl;
            cout<<"   Agenda de Contactos    "<<endl;
            cout<<"-------------------------"<<endl;

            list<Contacto>::iterator ite;
                for(ite=contactos.begin(); ite != contactos.end(); ite++)
                {
                    cout << "Nombre:  " << ite->getNombre() << endl;
                    cout << "Telefono:  " << ite->getTelefono() << endl;
                }

            cout<<"-------------------------"<<endl;
        }
};

int main() 
{
        Contacto* contacto = new Contacto();
        contacto->setContacto("Celes", 4324324);
        //cout<<contacto->getNombre()<<endl;

        Contacto* contacto2 = new Contacto();
        contacto2->setContacto("Luis", 9399929);

        Agenda* agenda = new Agenda();

        agenda->addContacto(contacto);
        agenda->addContacto(contacto2);

        agenda->listarContactos();

        delete contacto;
        delete agenda;
        return 0;
}
