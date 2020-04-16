#include <iostream>
#include <list>

using namespace std;

class Contacto 
{
    private:
        string nombre;
        int telefono;
        string email;
    
    public:
        Contacto(){}

        ~Contacto(){}

        void setContacto(string nom, int tel, string ema)  
        {
            nombre = nom;
            telefono = tel;
            email = ema;
        }

        string getNombre() 
        {
            return nombre;
        }
        
		int getTelefono() 
        {
            return telefono;
        }
        
		string getEmail()
        {
            return email;
        }
        //Contacto
        //{
            //return contacto();
        //}
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
                    cout << "Nombre:  " <<ite->getNombre()<< endl;
                    cout << "Telefono:  " <<ite->getTelefono()<< endl;
                    cout << "E-mail: " <<ite->getEmail() << endl;
                }

            cout<<"-------------------------"<<endl;
        }
};

int main() 
{
        Contacto* contacto = new Contacto();
        contacto->setContacto("Celes", 4562389, "celeste@hotmail.com");
        //cout<<contacto->getNombre()<<endl;

        Contacto* contacto2 = new Contacto();
        contacto2->setContacto("Ariel", 49712345, "Ariel_izurieta@hotmail.com");

        Agenda* agenda = new Agenda();

        agenda->addContacto(contacto);
        agenda->addContacto(contacto2);

        agenda->listarContactos();

        delete contacto;
        delete agenda;
        return 0;
}
