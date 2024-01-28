#pragma once
#include <iostream>

class Warlock {

  private:
         std::string name;
         std::string title;
                     Warlock    ();
                     Warlock    (const Warlock& obj);                                     /// all args const ex 0 and ex 1 кроме добавочных в worlock
         Warlock&    operator = (const Warlock& obj);

  public:
                     Warlock    (const std::string name, const std::string title);
                     ~Warlock   ();
  const std::string& getName    ()                                                 const; /// const const
  const std::string& getTitle   ()                                                 const;
        void         introduce  ()                                                 const;
        void         setTitle   (const std::string &title);
};