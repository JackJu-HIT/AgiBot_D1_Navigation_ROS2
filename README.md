# AgiBot_D1_Navigation_ROS2

本项目提供了适用于智元四足机器人 **agibot_D1_Edu** 版本的 ROS 2 架构下的轨迹优化与运动控制算法 C++ 实现。

---

| 🤖 机器人实测 (Real World) | 💻 RViz2 仿真规划 (Simulation) |
| :---: | :---: |
| [**▶️ 点击观看实测视频**](https://github.com/JackJu-HIT/AgiBot_D1_Navigation_ROS2/raw/master/%E5%9B%9B%E8%B6%B3%E6%9C%BA%E5%99%A8%E4%BA%BA%E5%AE%9E%E6%B5%8B%E8%A7%86%E9%A2%91.mp4) | [**▶️ 点击观看同步rviz2实时视频**](https://github.com/JackJu-HIT/AgiBot_D1_Navigation_ROS2/raw/master/rviz2.webm) |

---

## 🛠️ Build (构建与环境配置)

请在标准的 ROS 2 环境下进行构建。

### 1. 解决网络干扰问题 (⚠️ 重要)

**背景：** ROS 2 默认会扫描所有网卡并发送组播信号（DDS 流量），这可能会阻塞或干扰机器狗底层 SDK 的 UDP 通信包。

**操作：** 在你打开的**每一个**运行 ROS 节点的终端中，执行以下命令以配置 FastRTPS 仅使用共享内存（SHM）模式：

```bash
export FASTDDS_BUILTIN_TRANSPORTS=SHM
```

> **提示**：为了方便，您可以将此命令添加到 `~/.bashrc` 文件中，避免每次手动输入。

### 2. 编译工作空间

```bash
cd AgiBot_D1_Navigation_ROS2
colcon build --symlink-install
source install/setup.bash
```

---

## 🚀 启动节点

请在不同的终端窗口中分别运行以下指令（记得先执行步骤 1 中的 export 命令）：

### 1. 启动驱动模块
负责与机器狗底层 SDK 通信。
```bash
ros2 run dog_controller dog_driver_node
```

### 2. 启动遥控节点
用于发送基础控制指令（如站立、趴下）。
```bash
ros2 run dog_controller dog_keyboard_node
```

### 3. 启动控制与规划节点
加载 TEB 轨迹优化算法。
```bash
ros2 run teb_planner teb_plan
```

### 4. 启动可视化界面
```bash
rviz2
```

---

## 🎮 操作指南 (Usage)

请严格按照以下顺序操作，以确保规划与执行正常：

1.  **机器人复位**：
    在 `dog_keyboard_node` 终端中，通过键盘指令控制机器人进入 **站立 (Stand)** 状态。

2.  **设置轨迹点 (RViz2)**：
    使用 RViz2 顶部的 **Publish Point** 工具下发路径点。
    
    > **⚠️ 严格限制：**
    > *   只能且必须设置 **2 个点**。
    > *   **第 1 个点**：必须点在机器人当前的 **脚下 (Current Position)**。
    > *   **第 2 个点**：点在期望到达的 **目标位置 (Goal Position)**。

3.  **自动执行**：
    完成上述两点设置后，算法将自动生成一条直线轨迹，四足机器人将自动跟随该轨迹移动。

---

## 📊 可视化说明

为了在 RViz2 中正确观测数据，请订阅以下话题：

| 话题名称 | 类型 | 说明 |
| :--- | :--- | :--- |
| `/run_path` | Path | **实际轨迹**：机器人实际走过的红色移动轨迹 |
| `/visual_local_trajectory` | Path | **局部规划**：TEB 算法实时输出的优化轨迹 |
| `/visual_global_path` | Path | **全局目标**：起点到终点的目标直线轨迹 |
| `/odom` | Odometry | 里程计数据 (必需，用于定位) |

---

## ℹ️ 其他信息

*   **智元机器人 SDK 仓库**：[AgibotTech/agibot_D1_Edu-Ultra](https://github.com/AgibotTech/agibot_D1_Edu-Ultra)
*   **致谢**：特别感谢 **智元机器人** 提供的 **agibot_D_Edu** 硬件平台及技术支持，助力本项目顺利完成 C++ 代码开发与实机调试。

## 关注我们

更多技术细节与更新，请访问微信公众号：**机器人规划与控制研究所**

📄 **相关文章**：[点击跳转阅读](https://mp.weixin.qq.com/s/ehTY0wM_2-Huk2j2ftLPgg)
