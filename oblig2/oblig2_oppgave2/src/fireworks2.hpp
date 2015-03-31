#ifndef CLASS_FIREWORKS_H
#define CLASS_FIREWORKS_H

//Local includes
#include "animation_canvas.hpp"
#include "NormalDotFactory.hpp"
#include "BlinkingDotFactory.hpp"
#include "TintedDotFactory.hpp"
#include "MixedDotFactory.hpp"

class fireworks2: public animation_canvas {

	// The number of rockets to fire
	int rocketcount;

	NormalDotFactory* n_factory;
	BlinkingDotFactory* b_factory;
	TintedDotFactory* t_factory;
	MixedDotFactory* m_factory;

public:

	/** Initialize; i.e. create all the rockets, and add them
	 (animation_canvas has the container) */
	fireworks2(const char* title, int w, int h, int _rocketcount);
	~fireworks2() override;

};

#endif
