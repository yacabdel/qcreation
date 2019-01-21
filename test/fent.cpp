#include<fent.h>

fenetre::fenetre():QWidget()
{
    setFixedSize(300,150);


   m_slider=new QSlider(Qt::Horizontal, this);//pour que le curseur soit horizontal on ajout Qt::Horizontal
   m_slider->setGeometry(50,90,200,10);
   m_slider->setRange(600,1000);
  QObject::connect(m_slider,SIGNAL(valueChanged(int)),this,SLOT(changerLargeur(int)));

  m_slider1=new QSlider(this);
  m_slider1->setRange(300,600);

  QObject::connect(m_slider1,SIGNAL(valueChanged(int)),this,SLOT(changerHauteur(int)));

}
fenetre::~fenetre()
{
    delete m_slider;
}
void fenetre::changerLargeur(int largeur)
{
    setFixedSize(largeur,height());
}
void fenetre ::changerHauteur(int hauteur)
{
    setFixedSize(width(),hauteur);
}
