#ifndef KATKOS_HPP
#define KATKOS_HPP

#include <string>
#include <vector>

class Katkos {
  Katkos();
  //Katkos(SMTPLogin smtp_login);
  ~Katkos();

  int parse_template(std::string template_content, std::vector<std::string> inputs);
};

#endif /* KATKOS_HPP */
