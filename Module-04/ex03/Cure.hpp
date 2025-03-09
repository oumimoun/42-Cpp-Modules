#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(Cure const &other);
	virtual ~Cure(void);
	Cure  &operator=(Cure const &other);

	virtual AMateria* clone(void) const;
	virtual void use(ICharacter& target);

};

#endif