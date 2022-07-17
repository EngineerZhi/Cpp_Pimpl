#include "i_traffic.h"
#include "traffic.h"

I_Traffic::I_Traffic() : 
	traffic_pimpl_(std::make_unique<Traffic>()) {}

I_Traffic::~I_Traffic() {
}

int I_Traffic::GetType() { 
	return traffic_pimpl_->GetType(); 
}

int I_Traffic::GetPrice() { 
	return traffic_pimpl_->GetPrice();
}

std::string I_Traffic::GetName() { 
	return traffic_pimpl_->GetName(); 
}