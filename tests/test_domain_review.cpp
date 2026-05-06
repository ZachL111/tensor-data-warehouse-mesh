#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{61, 45, 25, 67};
    assert(domain_review_score(item) == 159);
    assert(domain_review_lane(item) == "ship");
}
