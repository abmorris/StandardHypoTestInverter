/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
 * This code was autogenerated by RooClassFactory                            *
 *****************************************************************************/
#ifndef ROOSTUDENTT
#define ROOSTUDENTT
#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
class RooStudentT : public RooAbsPdf
{
public:
	RooStudentT() {}
	RooStudentT(const char *name, const char *title, RooAbsReal& _x, RooAbsReal& _mu, RooAbsReal& _s, RooAbsReal& _n);
	RooStudentT(const RooStudentT& other, const char* name=0);
	virtual TObject* clone(const char* newname) const { return new RooStudentT(*this,newname); }
	inline virtual ~RooStudentT() {}
protected:
	RooRealProxy x;
	RooRealProxy mu;
	RooRealProxy s;
	RooRealProxy n;
	Double_t evaluate() const;
private:
//	ClassDef(RooStudentT,1)
};
#endif