#ifndef PROCESS_H
#define PROCESS_H

#include <string>
#include "linux_parser.h"
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
 public:
  Process(int pid): pid_(pid),command_(LinuxParser::Command(pid)),user_(LinuxParser::User(pid)){}

  int Pid() const;                               // TODO: See src/process.cpp
  std::string User();                      // TODO: See src/process.cpp
  std::string Command();                   // TODO: See src/process.cpp
  float CpuUtilization() const;                  // TODO: See src/process.cpp
  std::string Ram();                       // TODO: See src/process.cpp
  long int UpTime() const;                       // TODO: See src/process.cpp
  bool operator<(Process & a) const;  // TODO: See src/process.cpp

  // TODO: Declare any necessary private members
 private:
   int pid_;
    std::string command_;
    std::string user_;
};

#endif