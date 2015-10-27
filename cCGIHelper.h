/* 
 * File:   cCGIHelper.h
 * Author: juia
 *
 * Created on 22. Oktober 2015, 22:30
 */

#ifndef CCGIHELPER_H
#define	CCGIHELPER_H

#include "cHelper.h"

#include "boost/lexical_cast.hpp"

#include "cgicc/Cgicc.h"
#include "cgicc/HTTPHTMLHeader.h"
#include "cgicc/HTMLClasses.h"

class cCGIHelper
{
public:
  cCGIHelper();
  cCGIHelper(cgicc::Cgicc* p_poCgiCC);

  virtual ~cCGIHelper();

  template<class T>
  T GetParam(std::string p_strParamName)
  {
    return boost::lexical_cast<T>(GetParamSTR(p_strParamName));
  }
  
  std::string GetParamSTR(std::string p_strParamName, std::string p_strDefault = "");
  
  
  void SaveInput(std::string p_strCurrentState);


protected:
  cgicc::Cgicc* m_poCGI;
  bool m_bExternalCopyOfCGI;
  std::string m_strHomeIP;
  std::string m_strRootDirectory;
};
#endif	/* CCGIHELPER_H */
