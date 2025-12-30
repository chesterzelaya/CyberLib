// by Chester Zelaya

#include "Eigen/Core"
#include <Eigen/Dense>

/* The world may be transformed through the application of actions
 * that are chosen by a planner. Each action u when applied to current
 * state x produces a new state x' */

class actionSpace {
public:
  Eigen::MatrixXd getActions(); // Call to get actions in actionspace
  void addActions(Eigen::MatrixXd actions,
                  Eigen::MatrixXd state); // Add actions based on state (not all
                                          // necessarily disjoint)
};

Eigen::MatrixXd computeState(Eigen::MatrixXd curr_state,
                             Eigen::MatrixXd actions);
