#ifndef SHARED_H
#define SHARED_H

class Shared {
  private:
   int myx;
  public:
    Shared() { myx=0; }
    void setx(int newx);
    int  getx();
};

#endif
