#pragma once
#include <iostream>

class Warlock {
  private:       
          std::string _name;
          std::string _title;
                      Warlock   ();
                      Warlock   (const Warlock& o);
         Warlock&     operator= (const Warlock& o);

  public:
                      Warlock   (std::string n, std::string t);
                      ~Warlock  ();
  const std::string&  getName   () const;
  const std::string&  getTitle  () const;
        void          setTitle  (const std::string& t);
        void          introduce() const;
};