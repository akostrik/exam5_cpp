#pragma once
#include <iostream>

class Warlock {

  private:
         std::string _name;
         std::string _title;
                     Warlock    ();
                     Warlock    (const Warlock& obj);                                     /// const
         Warlock&    operator = (const Warlock& obj);

  public:
                     Warlock    (const std::string name, const std::string title);
                     ~Warlock   ();

  public:
  const std::string& getName    ()                                                 const; /// const const
  const std::string& getTitle   ()                                                 const;
        void         introduce  ()                                                 const;
        void         setTitle   (const std::string &title);
};