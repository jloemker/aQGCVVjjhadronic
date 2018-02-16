#pragma once

#include "UHH2/core/include/fwd.h"
#include "UHH2/core/include/Selection.h"

namespace uhh2examples {
    
/* Select events with at least two jets in which the leading two jets have deltaphi > 2.7 and the third jet pt is
 * below 20% of the average of the leading two jets, where the minimum deltaphi and
 * maximum third jet pt fraction can be changed in the constructor.
 * The jets are assumed to be sorted in pt.
 */
    class DijetSelection: public uhh2::Selection {
    public:
	DijetSelection(float dphi_min = 2.7f, float third_frac_max = 0.2f);
	virtual bool passes(const uhh2::Event & event) override;
    private:
	float dphi_min, third_frac_max;
    };

    class invMassAK8JetSelection: public uhh2::Selection {
    public:
	invMassAK8JetSelection(float invMass_min=1050.0f);
	virtual bool passes(const uhh2::Event & event) override;
    private:
	float invMass_min;
    };
    class deltaEtaAk8Selection: public uhh2::Selection {
    public:
	deltaEtaAk8Selection(float delta_max=6.5f);
	virtual bool passes(const uhh2::Event & event) override;
    private:
	float deta_max;
    };
    class OppositeEtaAK4Selection: public uhh2::Selection {
    public:
	OppositeEtaAK4Selection();
	virtual bool passes(const uhh2::Event & event) override;
    };

    class deltaEtaAk4Selection: public uhh2::Selection {
    public:
	deltaEtaAk4Selection(float delta_min=0.0f);
	virtual bool passes(const uhh2::Event & event) override;
    private:
	float deta_min;
    };
    class invMassAK4JetSelection: public uhh2::Selection {
    public:
	invMassAK4JetSelection(float invMass_min=2000.0f);
	virtual bool passes(const uhh2::Event & event) override;
    private:
	float invMass_min;
    };
}
