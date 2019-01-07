#include<fent.h>

fenetre::fenetre():QWidget()
{
    //fixation de la taille de la fenetre
    setFixedSize(300,150);
    //initialisation du bouton ici Qpushbutton prend deux arguments un QString et un pointeur vers un QWidget

    m_bouton=new QPushButton("fichier",this);
    m_bouton->setFont(QFont("aakar",20,QFont::Black,false));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setToolTip("texte d'aide");
    m_bouton->setText("mes fichiers");
    m_bouton->setIcon(QIcon("pic.png"));

    m_bouton->move(60,70);

}
fenetre::~fenetre()
{
    delete m_bouton;
}
